<td class="act dark">

                <span class="act-item">
            <a href="/contest/1842/submit/A"><img src="//codeforces.org/s/72515/images/icons/submit-22x22.png" title="Submit" alt="Submit"></a>
        </span>

                        <span class="act-item" style="position: relative; bottom: 2px;"><span>
            <img style="cursor: pointer" class="toggle-favourite add-favourite" title="Add to favourites" alt="Add to favourites" data-type="PROBLEM" data-entityid="1978965" data-size="16" src="//codeforces.org/s/72515/images/icons/star_gray_16.png">
    </span>

    <script type="text/javascript">
        $(document).ready(function () {
            $("img.toggle-favourite").click(function () {
                var size = $(this).attr("data-size");
                var img = $(this);

                var isFavourite = !img.hasClass("remove-favourite");
                var type = img.attr("data-type");
                var entityId = img.attr("data-entityId");

                $.post("/data/favourite",
                        { entityId: entityId, type: type, isFavourite: isFavourite },
                        function(response) {
                            if (response["success"] != "true") {
                                alert(response["message"]);
                            } else {
                                if (img.hasClass("remove-favourite")) {
                                    img.attr("src", "//codeforces.org/s/72515/images/icons/star_gray_" + size + ".png");
                                    img.removeClass("remove-favourite");
                                    img.addClass("add-favourite");
                                } else {
                                    img.attr("src", "//codeforces.org/s/72515/images/icons/star_yellow_" + size + ".png");
                                    img.removeClass("add-favourite");
                                    img.addClass("remove-favourite");
                                }
                            }
                        }, "json"
                );

                return false;
            });
        });
    </script></span>

                            <span class="act-item">
                        <img src="//codeforces.org/s/72515/images/icons/locked-22x22.png" title="Problem locked" alt="Problem locked">
                    </span>
            </td>
